//
//  INComposeViewController.h
//  BigSur
//
//  Created by Ben Gotow on 5/5/14.
//  Copyright (c) 2014 Inbox. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "INComposeRecipientRowView.h"
#import "INComposeSubjectRowView.h"
#import "INComposeAttachmentsRowView.h"
#import "INPlaceholderTextView.h"

@interface INComposeViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, INComposeAttachmentsRowViewDelegate>
{
    NSMutableArray * _verticalLayoutConstraints;
	UIPopoverController * _attachmentsPopover;
    
}

@property (nonatomic, strong) INDraft * draft;

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) NSMutableArray *scrollViewRows;
@property (strong, nonatomic) INPlaceholderTextView * bodyTextView;
@property (strong, nonatomic) INComposeRecipientRowView * toRecipientsView;
@property (strong, nonatomic) INComposeRecipientRowView * ccBccRecipientsView;
@property (strong, nonatomic) INComposeSubjectRowView * subjectView;
@property (strong, nonatomic) INComposeAttachmentsRowView * attachmentsView;

- (id)initWithDraft:(INMessage*)draft;

@end
