//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKit/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PKAddPaymentPassRequest : NSObject <NSSecureCoding>
{
    NSData *_encryptedPassData;
    NSData *_activationData;
    NSData *_ephemeralPublicKey;
    NSData *_wrappedKey;
    NSString *_encryptionVersion;
    NSData *_publicKeyHash;
    NSString *_issuerIdentifier;
    NSData *_nonce;
    NSString *_hostApplicationIdentifier;
    NSString *_hostApplicationVersion;
    NSData *_FPInfo;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *FPInfo; // @synthesize FPInfo=_FPInfo;
@property(copy, nonatomic) NSString *hostApplicationVersion; // @synthesize hostApplicationVersion=_hostApplicationVersion;
@property(copy, nonatomic) NSString *hostApplicationIdentifier; // @synthesize hostApplicationIdentifier=_hostApplicationIdentifier;
@property(copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(copy, nonatomic) NSString *issuerIdentifier; // @synthesize issuerIdentifier=_issuerIdentifier;
@property(copy, nonatomic) NSData *publicKeyHash; // @synthesize publicKeyHash=_publicKeyHash;
@property(copy, nonatomic) NSString *encryptionVersion; // @synthesize encryptionVersion=_encryptionVersion;
@property(copy, nonatomic) NSData *wrappedKey; // @synthesize wrappedKey=_wrappedKey;
@property(copy, nonatomic) NSData *ephemeralPublicKey; // @synthesize ephemeralPublicKey=_ephemeralPublicKey;
@property(copy, nonatomic) NSData *activationData; // @synthesize activationData=_activationData;
@property(copy, nonatomic) NSData *encryptedPassData; // @synthesize encryptedPassData=_encryptedPassData;
- (void).cxx_destruct;
- (_Bool)_hasRequiredFields:(_Bool)arg1;
- (_Bool)_hasRequiredThirdPartyFields:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

