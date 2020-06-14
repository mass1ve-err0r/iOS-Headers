//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol PTDomainClient <NSObject>
- (void)sendActiveTestRecipeEvent:(long long)arg1;
- (void)invokeOutletAtKeyPath:(NSString *)arg1;
- (void)setArchiveValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (void)restoreDefaultSettings;
- (void)updateSettingsFromArchive:(NSDictionary *)arg1;
@end

