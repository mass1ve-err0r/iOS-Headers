//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NUPage;

@interface NUPagingBlueprintItem : NSObject
{
    id <NUPage> _page;
    NSString *_identifier;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) id <NUPage> page; // @synthesize page=_page;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPageID:(id)arg1;
- (id)initWithPage:(id)arg1;

@end

