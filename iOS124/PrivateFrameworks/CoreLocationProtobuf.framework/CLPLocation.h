//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMotionActivity, CLPSatelliteReport, NSMutableArray;

@interface CLPLocation : PBCodable <NSCopying>
{
    double _latitude;
    double _longitude;
    double _timestamp;
    float _altitude;
    NSMutableArray *_appBundleIdIndices;
    int _context;
    float _course;
    float _courseAccuracy;
    CLPMotionActivity *_dominantMotionActivity;
    int _floor;
    float _horizontalAccuracy;
    float _horzUncSemiMaj;
    float _horzUncSemiMajAz;
    float _horzUncSemiMin;
    int _modeIndicator;
    CLPMotionActivity *_motionActivity;
    int _motionActivityConfidence;
    int _motionActivityType;
    int _provider;
    CLPMotionActivity *_rawMotionActivity;
    CLPSatelliteReport *_satReport;
    float _speed;
    float _speedAccuracy;
    float _verticalAccuracy;
    _Bool _isFromLocationController;
    _Bool _motionVehicleConnected;
    _Bool _motionVehicleConnectedStateChanged;
    struct {
        unsigned int altitude:1;
        unsigned int context:1;
        unsigned int course:1;
        unsigned int courseAccuracy:1;
        unsigned int floor:1;
        unsigned int horzUncSemiMaj:1;
        unsigned int horzUncSemiMajAz:1;
        unsigned int horzUncSemiMin:1;
        unsigned int modeIndicator:1;
        unsigned int motionActivityConfidence:1;
        unsigned int motionActivityType:1;
        unsigned int provider:1;
        unsigned int speed:1;
        unsigned int speedAccuracy:1;
        unsigned int verticalAccuracy:1;
        unsigned int isFromLocationController:1;
        unsigned int motionVehicleConnected:1;
        unsigned int motionVehicleConnectedStateChanged:1;
    } _has;
}

+ (Class)appBundleIdIndicesType;
@property(nonatomic) _Bool isFromLocationController; // @synthesize isFromLocationController=_isFromLocationController;
@property(retain, nonatomic) CLPSatelliteReport *satReport; // @synthesize satReport=_satReport;
@property(nonatomic) float horzUncSemiMajAz; // @synthesize horzUncSemiMajAz=_horzUncSemiMajAz;
@property(nonatomic) float horzUncSemiMin; // @synthesize horzUncSemiMin=_horzUncSemiMin;
@property(nonatomic) float horzUncSemiMaj; // @synthesize horzUncSemiMaj=_horzUncSemiMaj;
@property(nonatomic) float speedAccuracy; // @synthesize speedAccuracy=_speedAccuracy;
@property(nonatomic) float courseAccuracy; // @synthesize courseAccuracy=_courseAccuracy;
@property(retain, nonatomic) CLPMotionActivity *dominantMotionActivity; // @synthesize dominantMotionActivity=_dominantMotionActivity;
@property(retain, nonatomic) CLPMotionActivity *motionActivity; // @synthesize motionActivity=_motionActivity;
@property(retain, nonatomic) CLPMotionActivity *rawMotionActivity; // @synthesize rawMotionActivity=_rawMotionActivity;
@property(nonatomic) _Bool motionVehicleConnected; // @synthesize motionVehicleConnected=_motionVehicleConnected;
@property(nonatomic) _Bool motionVehicleConnectedStateChanged; // @synthesize motionVehicleConnectedStateChanged=_motionVehicleConnectedStateChanged;
@property(retain, nonatomic) NSMutableArray *appBundleIdIndices; // @synthesize appBundleIdIndices=_appBundleIdIndices;
@property(nonatomic) int floor; // @synthesize floor=_floor;
@property(nonatomic) int provider; // @synthesize provider=_provider;
@property(nonatomic) int motionActivityConfidence; // @synthesize motionActivityConfidence=_motionActivityConfidence;
@property(nonatomic) int motionActivityType; // @synthesize motionActivityType=_motionActivityType;
@property(nonatomic) int context; // @synthesize context=_context;
@property(nonatomic) float course; // @synthesize course=_course;
@property(nonatomic) float speed; // @synthesize speed=_speed;
@property(nonatomic) float verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) float altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) float horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsFromLocationController;
@property(readonly, nonatomic) _Bool hasSatReport;
@property(nonatomic) _Bool hasHorzUncSemiMajAz;
@property(nonatomic) _Bool hasHorzUncSemiMin;
@property(nonatomic) _Bool hasHorzUncSemiMaj;
- (int)StringAsModeIndicator:(id)arg1;
- (id)modeIndicatorAsString:(int)arg1;
@property(nonatomic) _Bool hasModeIndicator;
@property(nonatomic) int modeIndicator; // @synthesize modeIndicator=_modeIndicator;
@property(nonatomic) _Bool hasSpeedAccuracy;
@property(nonatomic) _Bool hasCourseAccuracy;
@property(readonly, nonatomic) _Bool hasDominantMotionActivity;
@property(readonly, nonatomic) _Bool hasMotionActivity;
@property(readonly, nonatomic) _Bool hasRawMotionActivity;
@property(nonatomic) _Bool hasMotionVehicleConnected;
@property(nonatomic) _Bool hasMotionVehicleConnectedStateChanged;
- (id)appBundleIdIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)appBundleIdIndicesCount;
- (void)addAppBundleIdIndices:(id)arg1;
- (void)clearAppBundleIdIndices;
@property(nonatomic) _Bool hasFloor;
@property(nonatomic) _Bool hasProvider;
@property(nonatomic) _Bool hasMotionActivityConfidence;
@property(nonatomic) _Bool hasMotionActivityType;
@property(nonatomic) _Bool hasContext;
@property(nonatomic) _Bool hasCourse;
@property(nonatomic) _Bool hasSpeed;
@property(nonatomic) _Bool hasVerticalAccuracy;
@property(nonatomic) _Bool hasAltitude;

@end

