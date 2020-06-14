//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <MediaSocial/SKUIArtworkRequestDelegate-Protocol.h>
#import <MediaSocial/UITableViewDataSource-Protocol.h>
#import <MediaSocial/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, SKUIMediaSocialAuthor, SKUIResourceLoader, SKUIStyledImageDataConsumer, UIImage, UITableView;

@interface MSCLAttributionSelectionViewController : SKUIViewController <SKUIArtworkRequestDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_authors;
    SKUIMediaSocialAuthor *_destinationAuthor;
    SKUIStyledImageDataConsumer *_imageDataConsumer;
    UIImage *_placeholderImage;
    SKUIResourceLoader *_resourceLoader;
    long long _selectedAuthorIndex;
    CDUnknownBlockType _selectionBlock;
    UITableView *_tableView;
}

@property(copy, nonatomic) CDUnknownBlockType selectionBlock; // @synthesize selectionBlock=_selectionBlock;
@property(nonatomic) long long selectedAuthorIndex; // @synthesize selectedAuthorIndex=_selectedAuthorIndex;
@property(copy, nonatomic) SKUIMediaSocialAuthor *destinationAuthor; // @synthesize destinationAuthor=_destinationAuthor;
@property(copy, nonatomic) NSArray *authors; // @synthesize authors=_authors;
- (void).cxx_destruct;
- (id)_placeholderImage;
- (id)_imageForAuthor:(id)arg1;
- (id)_imageDataConsumer;
- (id)_attributedTitleForAuthor:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)loadView;
- (void)reloadData;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

