//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber;

@interface KeybagSyncOperation : ISOperation
{
    NSNumber *_accountIdentifier;
}

- (void).cxx_destruct;
- (id)_newRequestPropertiesWithBodyData:(id)arg1;
- (id)_newBodyDataWithBodyPlist:(id)arg1 error:(id *)arg2;
- (void)run;
- (id)initWithKeybagSyncRequest:(id)arg1;

@end

