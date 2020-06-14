//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSError;

@interface SGXPCResponse : NSObject <NSSecureCoding>
{
    NSError *_error;
}

+ (id)responseWithError:(id)arg1;
+ (id)response;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;

@end

