//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSObject-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSData, _SFKey, _SFKeySpecifier, _SFSignedData;

@protocol SFSigningOperation <NSObject, NSCopying, NSSecureCoding>
@property(readonly, copy, nonatomic) _SFKeySpecifier *signingKeySpecifier;
- (NSData *)verify:(_SFSignedData *)arg1 withKey:(_SFKey *)arg2 error:(id *)arg3;
- (_SFSignedData *)sign:(NSData *)arg1 withKey:(_SFKey *)arg2 error:(id *)arg3;
@end

