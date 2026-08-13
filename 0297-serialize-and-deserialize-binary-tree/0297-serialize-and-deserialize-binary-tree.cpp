class Codec {
public:

    string serialize(TreeNode* root) {

        if (root == NULL)
            return "";

        string str = "";
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            TreeNode* curr = q.front();
            q.pop();

            if (curr == NULL) {
                str += "#,";
            }
            else {
                str += to_string(curr->val) + ",";

                q.push(curr->left);
                q.push(curr->right);
            }
        }

        return str;
    }

    TreeNode* deserialize(string data) {

        if (data.empty())
            return NULL;

        stringstream s(data);
        string str;

        getline(s, str, ',');

        TreeNode* root = new TreeNode(stoi(str));

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            TreeNode* node = q.front();
            q.pop();

            // left
            getline(s, str, ',');

            if (str != "#") {
                TreeNode* leftNode = new TreeNode(stoi(str));
                node->left = leftNode;
                q.push(leftNode);
            }

            // right
            getline(s, str, ',');

            if (str != "#") {
                TreeNode* rightNode = new TreeNode(stoi(str));
                node->right = rightNode;
                q.push(rightNode);
            }
        }

        return root;
    }
};