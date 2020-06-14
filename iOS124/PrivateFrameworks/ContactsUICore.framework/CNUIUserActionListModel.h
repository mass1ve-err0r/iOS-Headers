//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNUIUserActionItem, NSArray;

@interface CNUIUserActionListModel : NSObject
{
    CNUIUserActionItem *_defaultAction;
    NSArray *_actions;
    NSArray *_directoryServiceActions;
    NSArray *_foundOnDeviceActions;
}

+ (id)emptyModel;
@property(copy, nonatomic) NSArray *foundOnDeviceActions; // @synthesize foundOnDeviceActions=_foundOnDeviceActions;
@property(copy, nonatomic) NSArray *directoryServiceActions; // @synthesize directoryServiceActions=_directoryServiceActions;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) CNUIUserActionItem *defaultAction; // @synthesize defaultAction=_defaultAction;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)allActions;
- (id)initWithModel:(id)arg1 actions:(id)arg2;
- (id)initWithDefaultAction:(id)arg1 actions:(id)arg2 directoryServiceActions:(id)arg3 foundOnDeviceActions:(id)arg4;

@end

