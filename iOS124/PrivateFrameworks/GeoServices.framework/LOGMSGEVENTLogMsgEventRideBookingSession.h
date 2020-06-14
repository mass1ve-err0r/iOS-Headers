//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, NSString;

@interface LOGMSGEVENTLogMsgEventRideBookingSession : PBCodable <NSCopying>
{
    double _distanceToPickupInMeters;
    double _durationOfSessionInSeconds;
    long long _timestamp;
    GEOLatLng *_destinationBlurred;
    int _endState;
    int _endView;
    NSMutableArray *_errorMessages;
    NSMutableArray *_intentResponseFailures;
    unsigned int _numberOfAvailableExtensions;
    GEOLatLng *_originBlurred;
    NSString *_rideAppId;
    NSString *_rideAppVersion;
    NSString *_rideBookingSessionId;
    NSString *_rideType;
    int _statusIssue;
    _Bool _comparedRideOptions;
    _Bool _exploredOtherOptions;
    _Bool _installedApp;
    _Bool _movedPickupLocation;
    _Bool _paymentIsApplePay;
    _Bool _showedSurgePricingAlert;
    _Bool _switchedApp;
    _Bool _unavailable;
    struct {
        unsigned int distanceToPickupInMeters:1;
        unsigned int durationOfSessionInSeconds:1;
        unsigned int timestamp:1;
        unsigned int endState:1;
        unsigned int endView:1;
        unsigned int numberOfAvailableExtensions:1;
        unsigned int statusIssue:1;
        unsigned int comparedRideOptions:1;
        unsigned int exploredOtherOptions:1;
        unsigned int installedApp:1;
        unsigned int movedPickupLocation:1;
        unsigned int paymentIsApplePay:1;
        unsigned int showedSurgePricingAlert:1;
        unsigned int switchedApp:1;
        unsigned int unavailable:1;
    } _has;
}

+ (Class)intentResponseFailureType;
+ (Class)errorMessageType;
@property(retain, nonatomic) NSMutableArray *intentResponseFailures; // @synthesize intentResponseFailures=_intentResponseFailures;
@property(nonatomic) _Bool comparedRideOptions; // @synthesize comparedRideOptions=_comparedRideOptions;
@property(retain, nonatomic) NSString *rideAppVersion; // @synthesize rideAppVersion=_rideAppVersion;
@property(retain, nonatomic) NSMutableArray *errorMessages; // @synthesize errorMessages=_errorMessages;
@property(nonatomic) _Bool movedPickupLocation; // @synthesize movedPickupLocation=_movedPickupLocation;
@property(nonatomic) _Bool unavailable; // @synthesize unavailable=_unavailable;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool installedApp; // @synthesize installedApp=_installedApp;
@property(nonatomic) double durationOfSessionInSeconds; // @synthesize durationOfSessionInSeconds=_durationOfSessionInSeconds;
@property(nonatomic) _Bool showedSurgePricingAlert; // @synthesize showedSurgePricingAlert=_showedSurgePricingAlert;
@property(nonatomic) _Bool switchedApp; // @synthesize switchedApp=_switchedApp;
@property(nonatomic) unsigned int numberOfAvailableExtensions; // @synthesize numberOfAvailableExtensions=_numberOfAvailableExtensions;
@property(nonatomic) _Bool paymentIsApplePay; // @synthesize paymentIsApplePay=_paymentIsApplePay;
@property(nonatomic) double distanceToPickupInMeters; // @synthesize distanceToPickupInMeters=_distanceToPickupInMeters;
@property(retain, nonatomic) NSString *rideType; // @synthesize rideType=_rideType;
@property(nonatomic) _Bool exploredOtherOptions; // @synthesize exploredOtherOptions=_exploredOtherOptions;
@property(retain, nonatomic) GEOLatLng *destinationBlurred; // @synthesize destinationBlurred=_destinationBlurred;
@property(retain, nonatomic) GEOLatLng *originBlurred; // @synthesize originBlurred=_originBlurred;
@property(retain, nonatomic) NSString *rideAppId; // @synthesize rideAppId=_rideAppId;
@property(retain, nonatomic) NSString *rideBookingSessionId; // @synthesize rideBookingSessionId=_rideBookingSessionId;
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
- (id)intentResponseFailureAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentResponseFailuresCount;
- (void)addIntentResponseFailure:(id)arg1;
- (void)clearIntentResponseFailures;
- (int)StringAsStatusIssue:(id)arg1;
- (id)statusIssueAsString:(int)arg1;
@property(nonatomic) _Bool hasStatusIssue;
@property(nonatomic) int statusIssue; // @synthesize statusIssue=_statusIssue;
@property(nonatomic) _Bool hasComparedRideOptions;
@property(readonly, nonatomic) _Bool hasRideAppVersion;
- (id)errorMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)errorMessagesCount;
- (void)addErrorMessage:(id)arg1;
- (void)clearErrorMessages;
@property(nonatomic) _Bool hasMovedPickupLocation;
@property(nonatomic) _Bool hasUnavailable;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasInstalledApp;
@property(nonatomic) _Bool hasDurationOfSessionInSeconds;
@property(nonatomic) _Bool hasShowedSurgePricingAlert;
@property(nonatomic) _Bool hasSwitchedApp;
@property(nonatomic) _Bool hasNumberOfAvailableExtensions;
@property(nonatomic) _Bool hasPaymentIsApplePay;
@property(nonatomic) _Bool hasDistanceToPickupInMeters;
@property(readonly, nonatomic) _Bool hasRideType;
@property(nonatomic) _Bool hasExploredOtherOptions;
@property(readonly, nonatomic) _Bool hasDestinationBlurred;
@property(readonly, nonatomic) _Bool hasOriginBlurred;
@property(readonly, nonatomic) _Bool hasRideAppId;
- (int)StringAsEndView:(id)arg1;
- (id)endViewAsString:(int)arg1;
@property(nonatomic) _Bool hasEndView;
@property(nonatomic) int endView; // @synthesize endView=_endView;
- (int)StringAsEndState:(id)arg1;
- (id)endStateAsString:(int)arg1;
@property(nonatomic) _Bool hasEndState;
@property(nonatomic) int endState; // @synthesize endState=_endState;
@property(readonly, nonatomic) _Bool hasRideBookingSessionId;

@end

