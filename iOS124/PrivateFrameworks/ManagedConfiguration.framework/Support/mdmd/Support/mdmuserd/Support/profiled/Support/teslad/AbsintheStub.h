//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

@interface AbsintheStub : NSObject
{
    _Bool _readyToSign;
    NSDictionary *_stubInfo;
    NSData *_certificate;
    NSData *_session;
}

@property(retain, nonatomic) NSData *session; // @synthesize session=_session;
@property(retain, nonatomic) NSData *certificate; // @synthesize certificate=_certificate;
@property(nonatomic) _Bool readyToSign; // @synthesize readyToSign=_readyToSign;
@property(retain, nonatomic) NSDictionary *stubInfo; // @synthesize stubInfo=_stubInfo;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *sessionRequest;
- (id)signData:(id)arg1;
- (_Bool)establishSessionWithSessionInfoData:(id)arg1;
- (_Bool)installCertificate:(id)arg1;
- (id)init;

@end

