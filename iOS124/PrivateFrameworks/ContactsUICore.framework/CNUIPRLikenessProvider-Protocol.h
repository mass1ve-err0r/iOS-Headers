//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class PRLikeness;

@protocol CNUIPRLikenessProvider <NSObject>

@optional
- (struct CGImage *)_cnui_roundedRectImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)_cnui_circularImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (unsigned long long)_cnui_likenessType;
- (PRLikeness *)_cnui_likeness;
- (PRLikeness *)_cnui_likenessForSize:(struct CGSize)arg1 scale:(double)arg2;
- (PRLikeness *)_cnui_likenessForSize:(struct CGSize)arg1;
@end

