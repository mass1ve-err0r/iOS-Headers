//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPTransportControls;

@protocol MPTransportControlsTarget <NSObject>

@optional
- (void)transportControlsDidResize:(MPTransportControls *)arg1;
- (_Bool)transportControls:(MPTransportControls *)arg1 tappedButtonPart:(unsigned long long)arg2;
- (_Bool)transportControls:(MPTransportControls *)arg1 releasedHeldButtonPart:(unsigned long long)arg2;
- (_Bool)transportControls:(MPTransportControls *)arg1 heldButtonPart:(unsigned long long)arg2;
@end

