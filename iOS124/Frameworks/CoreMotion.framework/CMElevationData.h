//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID;

@interface CMElevationData : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long fRecordId;
    NSUUID *fSourceId;
    NSDate *fStartDate;
    NSDate *fEndDate;
    unsigned long long fElevationAscended;
    unsigned long long fElevationDescended;
}

+ (_Bool)supportsSecureCoding;
- (id)description;
@property(readonly, nonatomic) unsigned long long elevationDescended;
@property(readonly, nonatomic) unsigned long long elevationAscended;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSUUID *sourceId;
@property(readonly, nonatomic) unsigned long long recordId;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 elevationAscended:(unsigned long long)arg5 elevationDescended:(unsigned long long)arg6;
- (id)initWithSignificantElevationSample:(id)arg1;

@end

