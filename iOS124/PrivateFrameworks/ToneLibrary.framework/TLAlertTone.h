//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, TLSystemSound;

@interface TLAlertTone : NSObject
{
    unsigned int _actualSoundID;
    unsigned int _previewSoundID;
    TLSystemSound *_actualSound;
    TLSystemSound *_previewSound;
    NSURL *_soundFileURL;
}

@property(readonly, nonatomic) NSURL *soundFileURL; // @synthesize soundFileURL=_soundFileURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) TLSystemSound *previewSound;
@property(readonly, nonatomic) TLSystemSound *actualSound;
- (id)initWithSoundFileURL:(id)arg1 actualSoundID:(unsigned int)arg2 previewSoundID:(unsigned int)arg3;

@end

