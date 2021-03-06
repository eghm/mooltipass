/*
 * bitmap gear
 */

#define GEAR_WIDTH 64
#define GEAR_HEIGHT 64

const struct {
    uint16_t width;
    uint8_t height;
    uint8_t depth;
    uint8_t flags;
    uint16_t dataSize;
    uint16_t data[1024];
} image_gear __attribute__((__progmem__)) = {
    GEAR_WIDTH, GEAR_HEIGHT, 4, 0, 1024,
    {
   /* 0 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0001,  
    0x1000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
   
   /* 1 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x1469,  0xcdee,  
    0xffed,  0xa762,  0x1000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
   
   /* 2 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x1359,  0xdddd,  0xdddd,  
    0xeeef,  0xffff,  0xd941,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
   
   /* 3 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0015,  0x8ccc,  0xccdd,  0xdccd,  
    0xddee,  0xffff,  0xfffc,  0x8210,  0x0000,  0x0000,  0x0000,  0x0000,  
   
   /* 4 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x259c,  0xcccc,  0xccac,  0xdcbd,  
    0xecef,  0xdcff,  0xffff,  0xfe83,  0x0000,  0x0000,  0x0000,  0x0000,  
   
   /* 5 */ 0x0000,  0x0000,  0x0000,  0x0014,  0x9bbb,  0xbca9,  0xca59,  0xdcdd,  
    0xeeef,  0x87ef,  0xbeff,  0xfffd,  0x7100,  0x0000,  0x0000,  0x0000,  
   
   /* 6 */ 0x0000,  0x0000,  0x0000,  0x027a,  0xbbba,  0xcb94,  0xab8a,  0x8adc,  
    0xdeab,  0xbbeb,  0x4eff,  0xefff,  0xfb40,  0x0000,  0x0000,  0x0000,  
   
   /* 7 */ 0x0000,  0x0000,  0x0000,  0x39ab,  0xbbb6,  0x7ca3,  0x67ad,  0xacdc,  
    0xccad,  0xfb86,  0x3ef7,  0x9fff,  0xffd6,  0x0000,  0x0000,  0x0000,  
   
   /* 8 */ 0x0000,  0x0000,  0x0004,  0x9aaa,  0x9ac6,  0x4654,  0x435a,  0xeeed,  
    0xedcc,  0xb433,  0x4884,  0xaffe,  0xfffe,  0x8000,  0x0000,  0x0000,  
   
   /* 9 */ 0x0000,  0x0000,  0x005a,  0xaaa9,  0x56b7,  0x4433,  0x397c,  0xfddd,  
    0xefed,  0xa9c4,  0x3454,  0xce58,  0xffff,  0xf900,  0x0000,  0x0000,  
   
   /* 10 */ 0x0000,  0x0000,  0x05aa,  0xaaaa,  0x7453,  0x4233,  0x5dde,  0xecce,  
    0xeffd,  0xcff6,  0x3324,  0x355c,  0xffff,  0xff90,  0x0000,  0x0000,  
   
   /* 11 */ 0x0000,  0x0000,  0x499a,  0xa65a,  0x8443,  0x3013,  0x15be,  0xdabc,  
    0xeffe,  0xdb51,  0x3113,  0x445c,  0xe5cf,  0xfff8,  0x0000,  0x0000,  
   
   /* 12 */ 0x0000,  0x0003,  0x89aa,  0x9844,  0x3411,  0x3100,  0x039e,  0xd887,  
    0xdefe,  0xda30,  0x0013,  0x1244,  0x45ef,  0xfffe,  0x6000,  0x0000,  
   
   /* 13 */ 0x0000,  0x0017,  0x9997,  0x9954,  0x3410,  0x0000,  0x4dde,  0xdb5a,  
    0xcffe,  0xdff5,  0x0000,  0x0233,  0x38ed,  0xcfff,  0xd300,  0x0000,  
   
   /* 14 */ 0x0000,  0x0069,  0x9994,  0x5643,  0x1110,  0x0000,  0x498c,  0xedca,  
    0xefed,  0xcac4,  0x0000,  0x0211,  0x3594,  0x5fff,  0xfb10,  0x0000,  
   
   /* 15 */ 0x0000,  0x0389,  0x99a8,  0x4433,  0x1000,  0x0000,  0x024a,  0xffee,  
    0xeeee,  0xb310,  0x0000,  0x0001,  0x3335,  0xefff,  0xff70,  0x0000,  
   
   /* 16 */ 0x0000,  0x1799,  0x8677,  0x4312,  0x1000,  0x0000,  0x018c,  0xacee,  
    0xedbc,  0xf910,  0x0000,  0x0001,  0x2134,  0xcb8e,  0xffd3,  0x0000,  
   
   /* 17 */ 0x0000,  0x4999,  0x8544,  0x4310,  0x0000,  0x0000,  0x0069,  0x49dd,  
    0xde86,  0xb600,  0x0000,  0x0000,  0x0134,  0x546f,  0xfff8,  0x0000,  
   
   /* 18 */ 0x0001,  0x7999,  0x9844,  0x1220,  0x0000,  0x0000,  0x0017,  0xacdd,  
    0xdecc,  0x7100,  0x0000,  0x0000,  0x0222,  0x45ff,  0xfffe,  0x3000,  
   
   /* 19 */ 0x0003,  0x9885,  0x7634,  0x0000,  0x0000,  0x0000,  0x3505,  0xcb9d,  
    0xdaed,  0x4194,  0x0000,  0x0000,  0x0001,  0x43ca,  0x9fff,  0x7000,  
   
   /* 20 */ 0x0017,  0x8885,  0x4443,  0x3000,  0x0000,  0x0000,  0x6c56,  0xccdd,  
    0xdefd,  0x69f7,  0x0000,  0x0000,  0x0013,  0x3444,  0x8fff,  0xd100,  
   
   /* 21 */ 0x0029,  0x8899,  0x6420,  0x1000,  0x0000,  0x0130,  0x3ccc,  0xcccd,  
    0xeeef,  0xffe3,  0x1710,  0x0000,  0x0001,  0x1249,  0xffff,  0xf300,  
   
   /* 22 */ 0x0058,  0x8777,  0x4430,  0x0000,  0x0000,  0x05c8,  0x6bbb,  0xa998,  
    0x99ac,  0xefe9,  0xdf50,  0x0000,  0x0000,  0x1347,  0xecef,  0xf900,  
   
   /* 23 */ 0x0068,  0x8644,  0x4333,  0x0000,  0x0000,  0x009b,  0xbba9,  0xaabb,  
    0xbba8,  0x9cff,  0xfb01,  0x0000,  0x0000,  0x3334,  0x34bf,  0xfe10,  
   
   /* 24 */ 0x0178,  0x8875,  0x4110,  0x0000,  0x0003,  0x526b,  0xaaab,  0xbbbc,  
    0xcccb,  0xa8bf,  0xf739,  0x4000,  0x0000,  0x0124,  0x6dff,  0xff20,  
   
   /* 25 */ 0x0388,  0x8785,  0x4310,  0x0000,  0x0007,  0xb9aa,  0xbbbb,  0xbccc,  
    0xdddc,  0xcb8b,  0xfeff,  0x9000,  0x0000,  0x0134,  0x7ede,  0xff50,  
   
   /* 26 */ 0x0488,  0x7554,  0x3220,  0x0000,  0x0000,  0x5aaa,  0xbbbb,  0xbccd,  
    0xdeed,  0xdcb8,  0xdff6,  0x0000,  0x0000,  0x0223,  0x466c,  0xff90,  
   
   /* 27 */ 0x0688,  0x7655,  0x2000,  0x0000,  0x0043,  0x5aab,  0xbbbb,  0xbccd,  
    0xfffe,  0xedca,  0x9ef6,  0x6500,  0x0000,  0x0003,  0x46ad,  0xffb0,  
   
   /* 28 */ 0x0688,  0x8964,  0x3300,  0x0000,  0x019a,  0x9abc,  0xbaaa,  0xbbcc,  
    0xdfff,  0xedcb,  0x8dfe,  0xfc00,  0x0000,  0x0123,  0x4bff,  0xfed0,  
   
   /* 29 */ 0x0887,  0x6654,  0x3200,  0x0000,  0x0026,  0xa9cb,  0xaaaa,  0xaabb,  
    0xccff,  0xfedc,  0xaaef,  0x7300,  0x0000,  0x0123,  0x467b,  0xeed0,  
   
   /* 30 */ 0x0877,  0x6453,  0x0000,  0x0000,  0x0001,  0x99db,  0xaaa9,  0x8abb,  
    0xbbcf,  0xfedc,  0xb8ed,  0x0000,  0x0000,  0x0000,  0x4439,  0xeed0,  
   
   /* 31 */ 0x0878,  0x7754,  0x3200,  0x0000,  0x0489,  0x9adb,  0xaaa8,  0x8b9b,  
    0xbbbe,  0xedcc,  0xb8dd,  0xdc40,  0x0000,  0x0033,  0x47de,  0xeed0,  
   
   /* 32 */ 0x0877,  0x7754,  0x3200,  0x0000,  0x0489,  0x9aeb,  0xaa97,  0x8a6b,  
    0xbbbd,  0xdccc,  0xb9dd,  0xdb40,  0x0000,  0x0023,  0x47de,  0xddd0,  
   
   /* 33 */ 0x0877,  0x5444,  0x0000,  0x0000,  0x0001,  0x99eb,  0xaa98,  0x6a66,  
    0xabbc,  0xcccc,  0xb8dc,  0x0000,  0x0000,  0x0001,  0x4438,  0xddd0,  
   
   /* 34 */ 0x0777,  0x6654,  0x3200,  0x2323,  0x3346,  0x99eb,  0xaa99,  0x56aa,  
    0xaaab,  0xbcbb,  0xaacc,  0x6435,  0x3243,  0x0123,  0x467a,  0xddc0,  
   
   /* 35 */ 0x0677,  0x8864,  0x3301,  0x8846,  0x9689,  0x99cd,  0xaa99,  0x9568,  
    0x88ab,  0xbbbb,  0x9bcc,  0xdb7e,  0x74d9,  0x1133,  0x49ed,  0xddb0,  
   
   /* 36 */ 0x0577,  0x7655,  0x2444,  0x7867,  0x8578,  0x79ae,  0xbaaa,  0x9987,  
    0x99aa,  0xbbbb,  0x9bc9,  0xc86c,  0x98b8,  0x3673,  0x469b,  0xdd90,  
   
   /* 37 */ 0x0477,  0x6555,  0x4886,  0x7787,  0x7689,  0x799c,  0xebaa,  0xa999,  
    0x9aaa,  0xbbba,  0xabc9,  0xca8a,  0xbba8,  0x9db3,  0x455a,  0xcd70,  
   
   /* 38 */ 0x0387,  0x7775,  0x4588,  0x8888,  0x7788,  0x9899,  0xddba,  0xaaaa,  
    0xaaab,  0xbbba,  0xbaab,  0xbbab,  0xbbba,  0xab44,  0x6cbc,  0xcd30,  
   
   /* 39 */ 0x0177,  0x7777,  0x6688,  0x8899,  0x9868,  0x8879,  0x9deb,  0xbaaa,  
    0xaabb,  0xbbaa,  0xb7ab,  0xabbc,  0xdedb,  0xa979,  0x9acc,  0xcc10,  
   
   /* 40 */ 0x0067,  0x7656,  0x7888,  0x789b,  0xb877,  0x9889,  0x99ce,  0xdcbb,  
    0xbbbc,  0xbaab,  0xbaac,  0xbbbc,  0xcddc,  0xb9bc,  0x849c,  0xca10,  
   
   /* 41 */ 0x0037,  0x7777,  0x6888,  0x688a,  0xb977,  0x5697,  0x5999,  0xbded,  
    0xdcca,  0xaaa5,  0x9c56,  0xcba9,  0xabbc,  0xba97,  0xa9bc,  0xc600,  
   
   /* 42 */ 0x0018,  0x7777,  0x6987,  0x5788,  0x9978,  0x6550,  0x2999,  0x9999,  
    0x999a,  0xaa91,  0x2658,  0xcb97,  0x79bb,  0xbaa8,  0xcbcc,  0xb100,  
   
   /* 43 */ 0x0016,  0x7777,  0x79a8,  0x5477,  0x8878,  0x8820,  0x4944,  0x9999,  
    0x99a8,  0x35b4,  0x04ba,  0xbca6,  0x58ab,  0xbabb,  0xbbbc,  0x8100,  
   
   /* 44 */ 0x0002,  0x7777,  0x77c8,  0x8667,  0x8885,  0x5600,  0x2403,  0x9429,  
    0x9169,  0x2052,  0x0186,  0x8dba,  0x88ab,  0xbaab,  0x9bbc,  0x4000,  
   
   /* 45 */ 0x0001,  0x6777,  0x778b,  0x9888,  0x8886,  0x4200,  0x0003,  0x7109,  
    0x7028,  0x2000,  0x0023,  0x6cdc,  0xbbbc,  0xcabb,  0xbbb9,  0x1000,  
   
   /* 46 */ 0x0000,  0x2777,  0x7777,  0xa999,  0x8679,  0x3000,  0x0000,  0x0004,  
    0x2001,  0x0000,  0x0004,  0xb9ad,  0xdcdb,  0x9aaa,  0xbbb4,  0x0000,  
   
   /* 47 */ 0x0000,  0x1577,  0x7776,  0x6767,  0x7335,  0x1000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0002,  0x624a,  0x98b7,  0x8aa9,  0xbb81,  0x0000,  
   
   /* 48 */ 0x0000,  0x0267,  0x7776,  0x7646,  0x8200,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x005b,  0x6498,  0x9aaa,  0xba30,  0x0000,  
   
   /* 49 */ 0x0000,  0x0036,  0x7775,  0x6654,  0x3310,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0224,  0x4486,  0x5aaa,  0xa600,  0x0000,  
   
   /* 50 */ 0x0000,  0x0005,  0x7776,  0x7754,  0x3410,  0x1000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0233,  0x4699,  0x8aaa,  0x8100,  0x0000,  
   
   /* 51 */ 0x0000,  0x0001,  0x5777,  0x7654,  0x4411,  0x4000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0013,  0x1244,  0x449a,  0xaaa9,  0x1000,  0x0000,  
   
   /* 52 */ 0x0000,  0x0000,  0x1777,  0x7557,  0x6444,  0x4013,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x3103,  0x4458,  0x947a,  0xaa92,  0x0000,  0x0000,  
   
   /* 53 */ 0x0000,  0x0000,  0x0377,  0x7777,  0x6554,  0x5233,  0x0220,  0x1000,  
    0x0000,  0x0310,  0x3325,  0x3547,  0x99a9,  0xa930,  0x0000,  0x0000,  
   
   /* 54 */ 0x0000,  0x0000,  0x0037,  0x7777,  0x5576,  0x4544,  0x1320,  0x3203,  
    0x2023,  0x0232,  0x3444,  0x7955,  0x9999,  0x8300,  0x0000,  0x0000,  
   
   /* 55 */ 0x0000,  0x0000,  0x0001,  0x6777,  0x7776,  0x5555,  0x4432,  0x3313,  
    0x3033,  0x2344,  0x4564,  0x6988,  0x9998,  0x3000,  0x0000,  0x0000,  
   
   /* 56 */ 0x0000,  0x0000,  0x0000,  0x1577,  0x7775,  0x6874,  0x5555,  0x4544,  
    0x5444,  0x5465,  0x4895,  0x6999,  0x9871,  0x0000,  0x0000,  0x0000,  
   
   /* 57 */ 0x0000,  0x0000,  0x0000,  0x0036,  0x7777,  0x7765,  0x7755,  0x6546,  
    0x6456,  0x5587,  0x4888,  0x8999,  0x8410,  0x0000,  0x0000,  0x0000,  
   
   /* 58 */ 0x0000,  0x0000,  0x0000,  0x0002,  0x5677,  0x7776,  0x7756,  0x8648,  
    0x7469,  0x6588,  0x7888,  0x9986,  0x2000,  0x0000,  0x0000,  0x0000,  
   
   /* 59 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0256,  0x7777,  0x7777,  0x8667,  
    0x8578,  0x7788,  0x8889,  0x8631,  0x0000,  0x0000,  0x0000,  0x0000,  
   
   /* 60 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0012,  0x4687,  0x7777,  0x7778,  
    0x8778,  0x8888,  0x8975,  0x2100,  0x0000,  0x0000,  0x0000,  0x0000,  
   
   /* 61 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0124,  0x7887,  0x7777,  
    0x7788,  0x8898,  0x4310,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
   
   /* 62 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0124,  0x6678,  
    0x8865,  0x4211,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
   
   /* 63 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
   
    }
};
