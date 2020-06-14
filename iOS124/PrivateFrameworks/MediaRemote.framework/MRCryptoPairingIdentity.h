//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MRCryptoPairingIdentity : NSObject
{
    NSString *_identifier;
    NSData *_publicKey;
    NSData *_privateKey;
}

@property(readonly, nonatomic) NSData *privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3;

@end

