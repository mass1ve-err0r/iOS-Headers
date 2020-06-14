//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIListCollectionViewCell.h>

@class IKViewElement, VUIListLockupCollectionViewCellView;

__attribute__((visibility("hidden")))
@interface VUIListLockupCollectionViewCell : VUIListCollectionViewCell
{
    CDUnknownBlockType _buttonSelectionHandler;
    IKViewElement *_viewElement;
    IKViewElement *_primaryButtonElement;
    IKViewElement *_secondaryButtonElement;
    VUIListLockupCollectionViewCellView *_listCellView;
}

+ (id)configureWithElement:(id)arg1 existingView:(id)arg2;
@property(retain, nonatomic) VUIListLockupCollectionViewCellView *listCellView; // @synthesize listCellView=_listCellView;
@property(retain, nonatomic) IKViewElement *secondaryButtonElement; // @synthesize secondaryButtonElement=_secondaryButtonElement;
@property(retain, nonatomic) IKViewElement *primaryButtonElement; // @synthesize primaryButtonElement=_primaryButtonElement;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(copy, nonatomic) CDUnknownBlockType buttonSelectionHandler; // @synthesize buttonSelectionHandler=_buttonSelectionHandler;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

