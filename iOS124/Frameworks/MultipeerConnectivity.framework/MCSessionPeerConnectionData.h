//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface MCSessionPeerConnectionData : NSObject
{
    _Bool _hasIdentitySet;
    NSData *_gckSessionConnectionData;
    long long _encryptionPreference;
}

+ (id)connectionDataSegmentWithEncryptionPreference:(long long)arg1 identitySet:(_Bool)arg2 gckSessionConnectionDataBytes:(void *)arg3 gckSessionConnectionDataLength:(unsigned long long)arg4;
@property(nonatomic) _Bool hasIdentitySet; // @synthesize hasIdentitySet=_hasIdentitySet;
@property(nonatomic) long long encryptionPreference; // @synthesize encryptionPreference=_encryptionPreference;
@property(retain, nonatomic) NSData *gckSessionConnectionData; // @synthesize gckSessionConnectionData=_gckSessionConnectionData;
- (_Bool)parseConnectionDataBlob:(id)arg1;
- (void)parseConnectionDataSegmentWithBytes:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithConnectionDataBlob:(id)arg1;

@end

