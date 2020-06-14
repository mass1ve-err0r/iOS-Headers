//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NotesUI/PKCanvasViewDelegate-Protocol.h>

@class ICAttachment, ICAttachmentPencilKitModel, NSString, PKCanvasView, UIButton;

@interface ICPencilKitDrawingViewController : UIViewController <PKCanvasViewDelegate>
{
    ICAttachment *_attachment;
    PKCanvasView *_canvas;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) PKCanvasView *canvas; // @synthesize canvas=_canvas;
@property(retain, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (void)done:(id)arg1;
- (void)canvasViewDidStartNewStroke:(id)arg1;
- (void)canvasViewDrawingDidChange:(id)arg1;
@property(readonly, nonatomic) ICAttachmentPencilKitModel *attachmentModel;
- (void)viewDidLoad;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
