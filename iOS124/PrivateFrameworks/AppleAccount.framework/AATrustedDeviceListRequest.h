//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class AAGrandSlamSigner, NSString;

@interface AATrustedDeviceListRequest : AARequest
{
    AAGrandSlamSigner *_grandSlamSigner;
    NSString *_heartbeatToken;
}

+ (Class)responseClass;
@property(copy, nonatomic) NSString *heartbeatToken; // @synthesize heartbeatToken=_heartbeatToken;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (id)initWithURLString:(id)arg1 accountStore:(id)arg2 grandSlamAccount:(id)arg3;

@end

