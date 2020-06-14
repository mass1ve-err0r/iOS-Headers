//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface BSAuditHistoryItem : NSObject <BSXPCCoding, NSSecureCoding>
{
    NSDate *_date;
    NSString *_description;
}

+ (_Bool)supportsSecureCoding;
+ (id)itemWithWithFormat:(id)arg1;
+ (id)itemWithString:(id)arg1;
@property(copy, nonatomic) NSString *value; // @synthesize value=_description;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)_timeFormatter;
@property(readonly, copy) NSString *description;
- (id)initWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

