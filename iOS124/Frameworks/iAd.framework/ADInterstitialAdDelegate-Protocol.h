//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iAd/NSObject-Protocol.h>

@class ADInterstitialAd, NSError;

@protocol ADInterstitialAdDelegate <NSObject>
- (void)interstitialAd:(ADInterstitialAd *)arg1 didFailWithError:(NSError *)arg2;
- (void)interstitialAdDidUnload:(ADInterstitialAd *)arg1;

@optional
- (void)interstitialAdActionDidFinish:(ADInterstitialAd *)arg1;
- (_Bool)interstitialAdActionShouldBegin:(ADInterstitialAd *)arg1 willLeaveApplication:(_Bool)arg2;
- (void)interstitialAdDidLoad:(ADInterstitialAd *)arg1;
- (void)interstitialAdWillLoad:(ADInterstitialAd *)arg1;
@end

