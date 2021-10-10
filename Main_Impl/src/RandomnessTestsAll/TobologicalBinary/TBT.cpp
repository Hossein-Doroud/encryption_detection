/* This plugin is for TBT RT
input:
1-the payloadsLength array which contains the bytes length for each payload of the corresponding flow
2- the saved payloads of the flow (as unsigned char array)
Output:
The statistical representation of the p-values which are : Standard Deviation and Mean respectively
These 
*/
#include <RTsInR.h>
// #include "boost/asio/buffer.hpp" //to be installed and tested
// #include <stack>
#include "FlowTools.hpp"

void tbt_plugin(RInside &Rqm, size_t *payloadsLength, const char **listOfPayloads, uint8_t threshold, std::vector<double> &stRepOfPvals)
{
    double pValues[24];
    double stdev, mean;
    int thresholdAsInt = static_cast<int>(threshold);
    for (uint8_t i = 0; i < threshold; i++)
    {
        size_t pln = payloadsLength[i]; //this is the actual payload_length NOT the legnth exists in listOfpayloads

        double p_value = 0.12345;
        if (pln < 100)
            p_value = 0.05;
        else
            tbtInR(Rqm, (*(listOfPayloads + i)), p_value);
        pValues[i] = p_value;
        // printf("I AM INSIDE PLUG IN tbt_plugin");
        // printf("  TBT PVALUE       %.6lf,\t\t\n", pValues[i]);
    }
    mean_standardDeviation(pValues, thresholdAsInt, stdev, mean);
    // printf("stdev PVALUE       %.6lf,\t\t\n", stdev);
    stRepOfPvals.push_back(stdev);
    // printf("mean PVALUE       %.6lf,\t\t\n", mean);
    stRepOfPvals.push_back(mean);
}