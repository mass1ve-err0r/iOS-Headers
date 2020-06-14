//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolbox/AUAudioUnitV2Bridge.h>

__attribute__((visibility("hidden")))
@interface AUHALOutputUnit : AUAudioUnitV2Bridge
{
    CDUnknownBlockType _outputProvider;
    CDUnknownBlockType _inputHandler;
    _Bool _inputWasEnabled;
    _Bool _outputWasEnabled;
    _Bool _inputBusEnabled;
    int _renderObserverToken;
    struct unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long), std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> _renderObservers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopHardware;
- (_Bool)startHardwareAndReturnError:(id *)arg1;
- (_Bool)isRunning;
@property(nonatomic, getter=isOutputEnabled) _Bool outputEnabled;
@property(nonatomic, getter=isInputEnabled) _Bool inputEnabled;
- (_Bool)canPerformOutput;
- (_Bool)canPerformInput;
- (void)setInputHandler:(CDUnknownBlockType)arg1;
- (void)setOutputProvider:(CDUnknownBlockType)arg1;
- (int)enableBus:(unsigned int)arg1 scope:(unsigned int)arg2 enable:(_Bool)arg3;
- (CDUnknownBlockType)_inputHandler;
- (CDUnknownBlockType)outputProvider;
- (void)removeRenderObserver:(CDUnknownFunctionPointerType)arg1 userData:(void *)arg2;
- (void)addRenderObserver:(CDUnknownFunctionPointerType)arg1 userData:(void *)arg2;
- (void)removeRenderObserver:(long long)arg1;
- (long long)tokenByAddingRenderObserver:(CDUnknownBlockType)arg1;
- (void)initAUHALOutputUnit;
- (void)dealloc;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance *)arg1 description:(struct AudioComponentDescription)arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;

@end

