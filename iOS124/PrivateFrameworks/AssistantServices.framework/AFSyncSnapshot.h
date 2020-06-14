//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFSyncSnapshot : NSObject <NSSecureCoding>
{
    NSString *_anchor;
    NSString *_validity;
    long long _count;
    NSString *_key;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *validity; // @synthesize validity=_validity;
@property(copy, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

