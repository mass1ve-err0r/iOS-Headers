//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class CLLocation, NSData, NSDate, NSNumber, NSString, NSUUID;

@interface CLPredictedApplication : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_identifier;
    NSData *_icon;
    NSString *_title;
    NSString *_bundleId;
    NSString *_developer;
    NSNumber *_adamId;
    NSNumber *_confidence;
    long long _installationState;
    CLLocation *_location;
    double _distance;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) long long installationState; // @synthesize installationState=_installationState;
@property(retain, nonatomic) NSNumber *confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) NSNumber *adamId; // @synthesize adamId=_adamId;
@property(retain, nonatomic) NSString *developer; // @synthesize developer=_developer;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSData *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (_Bool)validOnDate:(id)arg1;
- (_Bool)validAtLocation:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 developer:(id)arg2 adamId:(id)arg3 bundleId:(id)arg4 icon:(id)arg5 installationState:(long long)arg6 location:(id)arg7 distance:(double)arg8 startDate:(id)arg9 endDate:(id)arg10 confidence:(id)arg11;
- (id)init;

@end

