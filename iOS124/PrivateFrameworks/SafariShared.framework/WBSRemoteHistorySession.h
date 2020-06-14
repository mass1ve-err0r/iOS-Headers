//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSArray, NSDate;

@interface WBSRemoteHistorySession : NSObject <NSSecureCoding>
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_items;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, getter=isCurrentSession) _Bool currentSession;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 items:(id)arg3;
- (id)init;

@end

