//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct NSMutableSet {
    Class _field1;
};

struct NSNumber {
    Class _field1;
};

struct NSString {
    Class _field1;
};

struct SBIconCoordinate {
    long long row;
    long long col;
};

struct SBNormalizedTransitionInterval {
    double start;
    double duration;
};

struct SBSwitcherItemContainerHeaderMetrics {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
};

struct SBWindowLevelRange_struct {
    double start;
    double end;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _SBPressSequenceValidatorBounds {
    double _field1;
    double _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    double _field6;
    int _field7;
} CDStruct_e950349b;

typedef struct {
    _Bool _field1;
    _Bool _field2;
    double _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    unsigned long long _field12;
} CDStruct_2960579e;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    _Bool itemIsEnabled[41];
    char timeString[64];
    char shortTimeString[64];
    char dateString[256];
    int gsmSignalStrengthRaw;
    int secondaryGsmSignalStrengthRaw;
    int gsmSignalStrengthBars;
    int secondaryGsmSignalStrengthBars;
    char serviceString[100];
    char secondaryServiceString[100];
    char serviceCrossfadeString[100];
    char secondaryServiceCrossfadeString[100];
    char serviceImages[2][100];
    char operatorDirectory[1024];
    unsigned int serviceContentType;
    unsigned int secondaryServiceContentType;
    int wifiSignalStrengthRaw;
    int wifiSignalStrengthBars;
    unsigned int dataNetworkType;
    unsigned int secondaryDataNetworkType;
    int batteryCapacity;
    unsigned int batteryState;
    char batteryDetailString[150];
    int bluetoothBatteryCapacity;
    int thermalColor;
    unsigned int thermalSunlightMode:1;
    unsigned int slowActivity:1;
    unsigned int syncActivity:1;
    char activityDisplayId[256];
    unsigned int bluetoothConnected:1;
    unsigned int displayRawGSMSignal:1;
    unsigned int displayRawWifiSignal:1;
    unsigned int locationIconType:1;
    unsigned int quietModeInactive:1;
    unsigned int tetheringConnectionCount;
    unsigned int batterySaverModeActive:1;
    unsigned int deviceIsRTL:1;
    unsigned int lock:1;
    char breadcrumbTitle[256];
    char breadcrumbSecondaryTitle[256];
    char personName[100];
    unsigned int electronicTollCollectionAvailable:1;
    unsigned int wifiLinkWarning:1;
    unsigned int wifiSearching:1;
    double backgroundActivityDisplayStartDate;
    unsigned int shouldShowEmergencyOnlyStatus:1;
    unsigned int secondaryCellularConfigured:1;
    char primaryServiceBadgeString[100];
    char secondaryServiceBadgeString[100];
} CDStruct_1916f467;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    unsigned int willActivate:1;
    unsigned int didActivate:1;
    unsigned int willDeactivate:1;
    unsigned int didDeactivate:1;
    unsigned int didChangeTop:1;
    unsigned int topBgStyleChange:1;
    unsigned int topOrientationEnable:1;
    unsigned int didCreateWindow:1;
    unsigned int willTearDownWindow:1;
    unsigned int didTearDownWindow:1;
    unsigned int didRemoveFromWindow:1;
} CDStruct_8fb8c794;

typedef struct {
    double value;
    _Bool inclusive;
} CDStruct_e3385c33;

typedef struct {
    double _field1;
    double _field2;
    _Bool _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
} CDStruct_aa45ca86;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    long long startStyle;
    long long endStyle;
    double transitionFraction;
} CDStruct_059c2b36;

typedef struct {
    _Bool valid;
    CDStruct_059c2b36 styleTransitionState;
} CDStruct_e838e30c;

typedef struct {
    _Bool _field1[41];
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :2;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int _field2;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    CDStruct_1916f467 _field3;
} CDStruct_73c1fcf1;

typedef struct {
    long long _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
} CDStruct_3b09cf25;

typedef struct {
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
        int _field6;
    } _field1;
    struct {
        unsigned int _field1;
    } _field2;
} CDStruct_a54b61c1;

typedef struct {
    CDStruct_e3385c33 start;
    CDStruct_e3385c33 end;
} CDStruct_3e878e9e;

typedef struct {
    double value;
    CDStruct_3e878e9e interval;
    long long mode;
} CDStruct_7238a68f;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    struct CGRect _field5;
} CDStruct_cafad96f;

typedef struct {
    struct CGRect _field1;
    struct UIEdgeInsets _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    struct CGRect _field5;
    double _field6;
} CDStruct_c0971cc5;

