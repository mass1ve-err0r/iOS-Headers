/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureTransitPoint : NSObject {
    double  _boundingRadius;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _boundingRect;
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    struct GEOTransitNodeFeature { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned long long x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; bool x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; unsigned long long x_1_2_12; id x_1_2_13; int x_1_2_14; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; } x_1_1_2; float x_1_1_3; struct { float x_4_2_1; float x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; short x_1_1_9; short x_1_1_10; unsigned char x_1_1_11; float x_1_1_12; float x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned char x_1_1_16; unsigned char x_1_1_17; bool x_1_1_18; bool x_1_1_19; bool x_1_1_20; bool x_1_1_21; bool x_1_1_22; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct { /* ? */ } *x3; struct GEOTransitNodeFeature {} *x4; unsigned long long *x5; unsigned long long *x6; BOOL x7; unsigned char x8; } * _feature;
    struct { double x1; double x2; } * _polygonPoints;
    unsigned long long  _polygonPointsCount;
}

@property (nonatomic, readonly) double boundingRadius;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, readonly) struct GEOTransitNodeFeature { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned long long x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; bool x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; unsigned long long x_1_2_12; id x_1_2_13; int x_1_2_14; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; } x_1_1_2; float x_1_1_3; struct { float x_4_2_1; float x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; short x_1_1_9; short x_1_1_10; unsigned char x_1_1_11; float x_1_1_12; float x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned char x_1_1_16; unsigned char x_1_1_17; bool x_1_1_18; bool x_1_1_19; bool x_1_1_20; bool x_1_1_21; bool x_1_1_22; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct { /* ? */ } *x3; struct GEOTransitNodeFeature {} *x4; unsigned long long *x5; unsigned long long *x6; BOOL x7; unsigned char x8; }*feature;
@property (nonatomic, readonly) GEOMapFeatureTransitHall *hall;
@property (nonatomic, readonly) NSString *internalName;
@property (nonatomic, readonly) NSArray *internalSystemNames;
@property (nonatomic, readonly) struct { double x1; double x2; }*polygonPoints;
@property (nonatomic, readonly) unsigned long long polygonPointsCount;
@property (nonatomic, readonly) GEOMapFeatureTransitStation *station;
@property (nonatomic, readonly) GEOMapFeatureTransitStop *stop;
@property (nonatomic, readonly) struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEORegionalResourceKey { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 8; unsigned int x_2_2_3 : 6; unsigned int x_2_2_4 : 8; unsigned int x_2_2_5 : 8; } x_3_1_2; struct _GEOSputnikMetadataKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 24; unsigned int x_3_2_3 : 14; unsigned int x_3_2_4 : 8; } x_3_1_3; struct _GEOFlyoverKey { unsigned int x_4_2_1 : 6; unsigned int x_4_2_2 : 26; unsigned int x_4_2_3 : 26; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 24; unsigned int x_4_2_6 : 14; unsigned int x_4_2_7 : 8; unsigned int x_4_2_8 : 8; } x_3_1_4; struct _GEOTransitLineSelectionKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 25; unsigned int x_5_2_3 : 25; unsigned int x_5_2_4 : 64; } x_3_1_5; struct _GEOTileOverlayKey { unsigned int x_6_2_1 : 6; unsigned int x_6_2_2 : 26; unsigned int x_6_2_3 : 26; unsigned int x_6_2_4 : 8; unsigned int x_6_2_5 : 32; } x_3_1_6; } x3; } tileKey;
@property (nonatomic, readonly) unsigned long long transitID;

- (double)boundingRadius;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)description;
- (struct GEOTransitNodeFeature { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned long long x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; bool x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; unsigned long long x_1_2_12; id x_1_2_13; int x_1_2_14; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; } x_1_1_2; float x_1_1_3; struct { float x_4_2_1; float x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; short x_1_1_9; short x_1_1_10; unsigned char x_1_1_11; float x_1_1_12; float x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned char x_1_1_16; unsigned char x_1_1_17; bool x_1_1_18; bool x_1_1_19; bool x_1_1_20; bool x_1_1_21; bool x_1_1_22; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct { /* ? */ } *x3; struct GEOTransitNodeFeature {} *x4; unsigned long long *x5; unsigned long long *x6; BOOL x7; unsigned char x8; }*)feature;
- (id)hall;
- (id)initWithFeature:(struct GEOTransitNodeFeature { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned long long x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; bool x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; unsigned long long x_1_2_12; id x_1_2_13; int x_1_2_14; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; } x_1_1_2; float x_1_1_3; struct { float x_4_2_1; float x_4_2_2; } x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; short x_1_1_9; short x_1_1_10; unsigned char x_1_1_11; float x_1_1_12; float x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned char x_1_1_16; unsigned char x_1_1_17; bool x_1_1_18; bool x_1_1_19; bool x_1_1_20; bool x_1_1_21; bool x_1_1_22; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct { /* ? */ } *x3; struct GEOTransitNodeFeature {} *x4; unsigned long long *x5; unsigned long long *x6; BOOL x7; unsigned char x8; }*)arg1;
- (id)internalName;
- (id)internalSystemNames;
- (struct { double x1; double x2; }*)polygonPoints;
- (unsigned long long)polygonPointsCount;
- (id)station;
- (id)stop;
- (struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEORegionalResourceKey { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 8; unsigned int x_2_2_3 : 6; unsigned int x_2_2_4 : 8; unsigned int x_2_2_5 : 8; } x_3_1_2; struct _GEOSputnikMetadataKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 24; unsigned int x_3_2_3 : 14; unsigned int x_3_2_4 : 8; } x_3_1_3; struct _GEOFlyoverKey { unsigned int x_4_2_1 : 6; unsigned int x_4_2_2 : 26; unsigned int x_4_2_3 : 26; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 24; unsigned int x_4_2_6 : 14; unsigned int x_4_2_7 : 8; unsigned int x_4_2_8 : 8; } x_3_1_4; struct _GEOTransitLineSelectionKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 25; unsigned int x_5_2_3 : 25; unsigned int x_5_2_4 : 64; } x_3_1_5; struct _GEOTileOverlayKey { unsigned int x_6_2_1 : 6; unsigned int x_6_2_2 : 26; unsigned int x_6_2_3 : 26; unsigned int x_6_2_4 : 8; unsigned int x_6_2_5 : 32; } x_3_1_6; } x3; })tileKey;
- (unsigned long long)transitID;
- (void)updateWithGeometryFeature:(struct { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned long long x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; bool x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; unsigned long long x_1_2_12; id x_1_2_13; int x_1_2_14; } x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; bool x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; unsigned char x_1_1_17; bool x_1_1_18; unsigned short x_1_1_19; struct _NSRange { unsigned long long x_20_2_1; unsigned long long x_20_2_2; } x_1_1_20; } x1; }*)arg1;

@end
