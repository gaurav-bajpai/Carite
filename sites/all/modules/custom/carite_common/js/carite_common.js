/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

//jQuery(".edited_by_other").live("click", function () {
    jQuery(".edited_by_other").qtip({// Grab some elements to apply the tooltip to
        content: {
            text: "My common piece of text here"
        }
    })
//});