//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/IDSMessage.h>

#import <IMTransferAgent/NSCopying-Protocol.h>

@class NSData, NSString;

@interface FTiMessageRequestMMCSDownloadToken : IDSMessage <NSCopying>
{
    NSString *_owner;
    NSString *_responseAuthToken;
    NSData *_signature;
    NSString *_responseRequestorID;
    long long _contentVersion;
    NSString *_contentHeaders;
    NSString *_authURLString;
    NSData *_responseContentBody;
    long long _responseContentVersion;
}

@property long long responseContentVersion; // @synthesize responseContentVersion=_responseContentVersion;
@property(copy) NSData *responseContentBody; // @synthesize responseContentBody=_responseContentBody;
@property(copy) NSString *authURLString; // @synthesize authURLString=_authURLString;
@property(copy) NSString *contentHeaders; // @synthesize contentHeaders=_contentHeaders;
@property long long contentVersion; // @synthesize contentVersion=_contentVersion;
@property(copy) NSString *responseRequestorID; // @synthesize responseRequestorID=_responseRequestorID;
@property(copy) NSData *signature; // @synthesize signature=_signature;
@property(copy) NSString *responseAuthToken; // @synthesize responseAuthToken=_responseAuthToken;
@property(copy) NSString *owner; // @synthesize owner=_owner;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (long long)responseCommand;
- (long long)command;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

