//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKIconArtwork.h>

__attribute__((visibility("hidden")))
@interface _VKScaledFallbackIconArtwork : VKIconArtwork
{
    double _scaleFactor;
    VKIconArtwork *_artwork;
}

- (Matrix_8746f91e)anchorPoint;
- (Box_3fb92e00)localCollisionBounds;
- (Box_55c4a776)localRenderBounds;
- (_Bool)hasBounds;
- (void)_cleanUpAfterDrawing;
- (id)_newScaledImage:(id)arg1;
- (id)_newImage;
- (id)_newImageWithText:(id)arg1 fontName:(id)arg2;
- (void)dealloc;
- (id)initWithArtwork:(id)arg1 contentScale:(double)arg2;

@end

