//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class NUInterstitialAdManager;
@protocol NUPage;

@protocol NUInterstitialAdManagerDelegate <NSObject>
- (id <NUPage>)interstitialAdManager:(NUInterstitialAdManager *)arg1 pageAfterPage:(id <NUPage>)arg2;
- (void)interstitialAdManager:(NUInterstitialAdManager *)arg1 didUnloadInterstitialPage:(id <NUPage>)arg2;
- (void)interstitialAdManager:(NUInterstitialAdManager *)arg1 didLoadInterstitialPage:(id <NUPage>)arg2;
@end

