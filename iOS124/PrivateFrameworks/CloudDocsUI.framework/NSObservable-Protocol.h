//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsUI/NSObject-Protocol.h>

@class NSError, NSObservation;
@protocol NSObservable><NSObserver, NSObserver;

@protocol NSObservable <NSObject>

@optional
- (void)finishObserving;
- (void)receiveObservedError:(NSError *)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)removeObservation:(NSObservation *)arg1;
- (NSObservation<NSObservable><NSObserver> *)addObserver:(id <NSObserver>)arg1;
@end

