//#ifndef XMOLOGS_H_
//#define XMOLOGS_H_


//QAUT5 - LOG5 ==================================================================================
#define LOG_QAUTO_05_BASE(struct_enum)\
      { (struct_enum), sizeof(log_QAUTO_05), "QAU5",\
      "QBBBBIIffffffffI","t,ts0,ts1,ts2,hasp,tls0,tls1,asp,crc,g0,g1,lth0,lth1,tts,tsc,now","s---------------","F000000000000000"}

struct PACKED log_QAUTO_05{
     LOG_PACKET_HEADER;
     uint64_t time_us;
//     uint8_t update_transition;
     uint8_t transition_state0;
     uint8_t transition_state1;
     uint8_t transition_state2;
     uint8_t have_airspeed;
     uint32_t transition_low_airspeed_ms0;
     uint32_t transition_low_airspeed_ms1;
     float aspeed;
     float climb_rate_cms;
     float ahrs_get_gyro_z0;
     float ahrs_get_gyro_z1;
     float last_throttle0;
     float last_throttle1;
     float trans_time_ms;
     float transition_scale;
     uint32_t ap_hal_now;
};