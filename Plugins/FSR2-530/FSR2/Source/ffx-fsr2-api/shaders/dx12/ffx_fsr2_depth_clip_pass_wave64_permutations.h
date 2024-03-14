#include "ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3.h"
#include "ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc.h"
#include "ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049.h"
#include "ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec.h"
#include "ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8.h"
#include "ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6.h"
#include "ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61.h"
#include "ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613.h"

typedef union ffx_fsr2_depth_clip_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_depth_clip_pass_wave64_PermutationKey;

typedef struct ffx_fsr2_depth_clip_pass_wave64_PermutationInfo {
    const uint32_t       blobSize;
    const unsigned char* blobData;


    const uint32_t  numCBVResources;
    const char**    cbvResourceNames;
    const uint32_t* cbvResourceBindings;
    const uint32_t* cbvResourceCounts;
    const uint32_t* cbvResourceSpaces;

    const uint32_t  numSRVResources;
    const char**    srvResourceNames;
    const uint32_t* srvResourceBindings;
    const uint32_t* srvResourceCounts;
    const uint32_t* srvResourceSpaces;

    const uint32_t  numUAVResources;
    const char**    uavResourceNames;
    const uint32_t* uavResourceBindings;
    const uint32_t* uavResourceCounts;
    const uint32_t* uavResourceSpaces;

    const uint32_t  numSamplerResources;
    const char**    samplerResourceNames;
    const uint32_t* samplerResourceBindings;
    const uint32_t* samplerResourceCounts;
    const uint32_t* samplerResourceSpaces;

    const uint32_t  numRTAccelerationStructureResources;
    const char**    rtAccelerationStructureResourceNames;
    const uint32_t* rtAccelerationStructureResourceBindings;
    const uint32_t* rtAccelerationStructureResourceCounts;
    const uint32_t* rtAccelerationStructureResourceSpaces;
} ffx_fsr2_depth_clip_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_fsr2_depth_clip_pass_wave64_IndirectionTable[] = {
    0,
    0,
    0,
    0,
    2,
    2,
    2,
    2,
    1,
    1,
    1,
    1,
    3,
    3,
    3,
    3,
    7,
    7,
    7,
    7,
    4,
    4,
    4,
    4,
    5,
    5,
    5,
    5,
    6,
    6,
    6,
    6,
    0,
    0,
    0,
    0,
    2,
    2,
    2,
    2,
    1,
    1,
    1,
    1,
    3,
    3,
    3,
    3,
    7,
    7,
    7,
    7,
    4,
    4,
    4,
    4,
    5,
    5,
    5,
    5,
    6,
    6,
    6,
    6,
};

static const ffx_fsr2_depth_clip_pass_wave64_PermutationInfo g_ffx_fsr2_depth_clip_pass_wave64_PermutationInfo[] = {
    { g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_size, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_SRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_SRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_SRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_SRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_UAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_UAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_UAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_UAVResourceSpaces, 1, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_650a1084dc73fc39e0d0d92dd03124f3_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_size, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_SRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_SRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_SRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_SRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_UAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_UAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_UAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_UAVResourceSpaces, 1, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_8235835e55e7c299721a6383ba41bebc_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_size, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_SRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_SRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_SRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_SRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_UAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_UAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_UAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_UAVResourceSpaces, 1, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_d11505c78d570626b28eead11a6fb049_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_size, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_SRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_SRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_SRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_SRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_UAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_UAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_UAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_UAVResourceSpaces, 1, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_84c167a8c101fa9567da3f260489afec_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_size, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_SRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_SRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_SRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_SRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_UAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_UAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_UAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_UAVResourceSpaces, 1, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_c2833564d2b196361ddb5d9655072ec8_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_size, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_SRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_SRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_SRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_SRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_UAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_UAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_UAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_UAVResourceSpaces, 1, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_3421183f9cf15b77cab71897633671d6_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_size, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_SRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_SRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_SRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_SRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_UAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_UAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_UAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_UAVResourceSpaces, 1, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_1a6557898a351ea059597968b6396c61_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_size, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_SRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_SRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_SRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_SRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_UAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_UAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_UAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_UAVResourceSpaces, 1, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_08c2e5e8825e57a4642419ae14e51613_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

