//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSFileProviderEnumerationProperties;
@protocol FPXEnumeratorObserver;

@protocol FPXVendorObservation
- (void)_startObservingCollectionWithProperties:(NSFileProviderEnumerationProperties *)arg1 observer:(id <FPXEnumeratorObserver>)arg2 completionHandler:(void (^)(id <FPXEnumerator>, NSError *))arg3;
@end

