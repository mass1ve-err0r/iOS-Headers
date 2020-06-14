//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSAudioDecoderDelegate;

@interface CSAudioDecoder : NSObject
{
    struct OpaqueAudioConverter *_decoder;
    struct AudioStreamBasicDescription _inASBD;
    struct AudioStreamBasicDescription _outASBD;
    id <CSAudioDecoderDelegate> _delegate;
}

+ (id)opusDecoder;
@property __weak id <CSAudioDecoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addPackets:(id)arg1 remoteVAD:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)initWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;

@end

