//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKCollectionElement.h>

@class IKAppMenuBarDocument;

@interface IKMenuBarElement : IKCollectionElement
{
    IKAppMenuBarDocument *_menuBarDocument;
}

+ (id)supportedFeatures;
@property(readonly, nonatomic) IKAppMenuBarDocument *menuBarDocument; // @synthesize menuBarDocument=_menuBarDocument;
- (void).cxx_destruct;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

