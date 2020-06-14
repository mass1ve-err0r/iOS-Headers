//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface _CDUserActivity : NSObject <NSSecureCoding>
{
    NSString *_bundleId;
    NSString *_type;
    NSString *_title;
    NSDate *_date;
    NSDictionary *_payload;
}

+ (_Bool)supportsSecureCoding;
+ (id)createFromUserActivity:(id)arg1;
@property(copy) NSDictionary *payload; // @synthesize payload=_payload;
@property(copy) NSDate *date; // @synthesize date=_date;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *type; // @synthesize type=_type;
@property(copy) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

