//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/_NSObservableObservation.h>

@class NSObservableKeyPath;

__attribute__((visibility("hidden")))
@interface _NSObservableKVO1Adaptor : _NSObservableObservation
{
    NSObservableKeyPath *kp;
    _Bool emitsChanges;
}

- (void)finishObserving;
- (void)remove;
- (void)_setEmitsChanges:(_Bool)arg1;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void *)arg7;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithObservable:(id)arg1 observer:(id)arg2 keyPath:(id)arg3;
- (_Bool)isEqual:(id)arg1;

@end

