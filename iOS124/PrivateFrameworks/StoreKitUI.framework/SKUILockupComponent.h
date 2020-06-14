//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class SKUIEditorialComponent, SKUIItem, SKUILockupViewElement;

@interface SKUILockupComponent : SKUIPageComponent
{
    SKUIEditorialComponent *_editorial;
    SKUIItem *_item;
    long long _itemIdentifier;
    struct SKUILockupStyle _lockupStyle;
}

@property(readonly, nonatomic) struct SKUILockupStyle lockupStyle; // @synthesize lockupStyle=_lockupStyle;
@property(readonly, nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) SKUIItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) SKUIEditorialComponent *editorial; // @synthesize editorial=_editorial;
- (void).cxx_destruct;
- (void)_setLockupStyle:(struct SKUILockupStyle)arg1;
- (void)_setItem:(id)arg1;
@property(readonly, nonatomic) _Bool _needsItemData;
- (long long)componentType;
- (id)initWithViewElement:(id)arg1;
- (id)initWithItem:(id)arg1 style:(struct SKUILockupStyle)arg2;
- (id)initWithItemIdentifier:(long long)arg1 style:(struct SKUILockupStyle)arg2;
- (id)initWithCustomPageContext:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUILockupViewElement *viewElement; // @dynamic viewElement;

@end

