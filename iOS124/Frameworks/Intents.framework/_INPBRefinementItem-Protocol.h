//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBSelectionItem;

@protocol _INPBRefinementItem <NSObject>
@property(readonly, nonatomic) _Bool hasSubKeyPath;
@property(copy, nonatomic) NSString *subKeyPath;
@property(readonly, nonatomic) _Bool hasItem;
@property(retain, nonatomic) _INPBSelectionItem *item;
@end
