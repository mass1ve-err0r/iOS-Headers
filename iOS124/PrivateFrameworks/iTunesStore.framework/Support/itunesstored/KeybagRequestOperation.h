//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSString, SSKeybagRequest;

@interface KeybagRequestOperation : ISOperation
{
    NSString *_clientIdentifierHeader;
    SSKeybagRequest *_request;
    NSString *_userAgent;
    NSArray *_claimedBundleIdentifiers;
}

@property(readonly) NSArray *claimedBundleIdentifiers; // @synthesize claimedBundleIdentifiers=_claimedBundleIdentifiers;
- (void).cxx_destruct;
- (void)_getDownloaderIdentifier:(id *)arg1 purchaserIdentifier:(id *)arg2 forApplication:(id)arg3;
- (void)run;
- (id)initWithKeybagRequest:(id)arg1 client:(id)arg2;
- (id)initWithKeybagRequest:(id)arg1 clientIdentifierHeader:(id)arg2 userAgent:(id)arg3;

@end

