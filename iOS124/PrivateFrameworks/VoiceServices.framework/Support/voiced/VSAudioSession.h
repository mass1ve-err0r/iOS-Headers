//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface VSAudioSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _audioSessionIsSetUp;
    CDStruct_a87a0d46 _desiredState;
    CDStruct_a87a0d46 _cachedState;
    _Bool _bluetoothAllowed;
    struct __CFBag *_activityBag;
    long long _serverGeneration;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_safeSetBluetoothInputAllowed:(_Bool)arg1;
- (void)_safeSetActive:(_Bool)arg1 withActivity:(long long)arg2;
- (void)_safeSetCategoryForActivity:(long long)arg1;
- (long long)_safeServerGeneration;
- (void)_safeSetupAudioSession;
- (long long)_nextActivityForActive:(_Bool)arg1 activity:(long long)arg2 serverActivity:(long long)arg3;
- (void)_setCategoryForActivity:(long long)arg1;
- (void)_setupAudioSession;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)_audioSessionInterrupted:(id)arg1;
- (void)dealloc;
- (id)init;

@end

