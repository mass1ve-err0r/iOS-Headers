//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@class NSMutableDictionary;

@interface CUINamedRecognitionGroup : CUINamedLookup
{
    NSMutableDictionary *_imageContents;
    NSMutableDictionary *_objectContents;
}

- (id)recognitionObjectWithName:(id)arg1;
- (id)recognitionImageWithName:(id)arg1;
- (id)recognitionItemsWithName:(id)arg1;
- (id)namedRecognitionObjectObjectList;
- (id)namedRecognitionImageImageList;
- (id)namedRecognitionItemList;
- (void)dealloc;
- (id)initWithName:(id)arg1 contentsFromCatalog:(id)arg2 usingRenditionKey:(id)arg3 fromTheme:(unsigned long long)arg4;

@end
