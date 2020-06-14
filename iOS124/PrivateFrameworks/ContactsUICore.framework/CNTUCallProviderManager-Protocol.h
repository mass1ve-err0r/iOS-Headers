//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNObservable, NSArray, NSString;
@protocol CNSchedulerProvider, CNTUCallProvider;

@protocol CNTUCallProviderManager <NSObject>
- (id <CNTUCallProvider>)thirdPartyCallProviderWithBundleIdentifier:(NSString *)arg1;
- (NSArray *)thirdPartyCallProvidersForActionType:(NSString *)arg1;
- (CNObservable *)observableForCallProvidersChangedWithSchedulerProvider:(id <CNSchedulerProvider>)arg1;
@end

