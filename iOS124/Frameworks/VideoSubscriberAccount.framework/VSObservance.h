//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol VSObservanceDelegate;

__attribute__((visibility("hidden")))
@interface VSObservance : NSObject
{
    _Bool _observing;
    id _object;
    NSString *_keyPath;
    unsigned long long _options;
    id <VSObservanceDelegate> _delegate;
}

@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(nonatomic) __weak id <VSObservanceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserving;
- (void)startObserving;
- (void)dealloc;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3;
- (id)init;

@end

