//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaItemCollection;

@interface PLPhotosDefaults : NSObject
{
    _Bool _shouldPlayMusic;
    _Bool _summarizeMomentSections;
    int _transition;
    MPMediaItemCollection *_musicCollection;
}

+ (int)randomTransition;
+ (id)sharedInstance;
- (id)musicCollection;
- (void)setMusicCollection:(id)arg1;
- (void)setShouldPlayMusic:(_Bool)arg1;
- (_Bool)shouldPlayMusic;
- (void)setTransition:(int)arg1;
- (int)transition;
- (int)transitionForAnimationMovingForward:(_Bool)arg1;
- (_Bool)summarizeMomentSections;
- (id)init;
- (void)_reloadPhotoDefaultValuesAndNotify:(_Bool)arg1;
- (void)reloadPhotoDefaultValues;
- (void)dealloc;

@end

