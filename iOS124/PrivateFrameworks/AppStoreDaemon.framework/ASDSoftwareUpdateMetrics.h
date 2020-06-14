//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSDate;

@interface ASDSoftwareUpdateMetrics : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _usingModernUpdatesCheck;
    NSDate *_lastUpdateCheck;
    NSDate *_nextUpdateCheck;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool usingModernUpdatesCheck; // @synthesize usingModernUpdatesCheck=_usingModernUpdatesCheck;
@property(copy, nonatomic) NSDate *nextUpdateCheck; // @synthesize nextUpdateCheck=_nextUpdateCheck;
@property(copy, nonatomic) NSDate *lastUpdateCheck; // @synthesize lastUpdateCheck=_lastUpdateCheck;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

